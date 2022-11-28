module.exports = grammar({
	name: 'tracinglog',
	
  rules: {
		logs: $ => repeat(seq($._logline, optional("\n"))),

		// Match an individual log line
		_logline : $ => seq (
			$.date,
			$.spacing,
			$.level,
			$.spacing,
			$.module_name,
			$.spacing,
			$.message
		),
		// date formats supported
		date : $ => choice(
			$.utc_tz
		),
		utc_tz: $ => seq(
			$.y_m_d,
			$.h_m_s_subs,
		),
		y_m_d: $ => /[0-9]{4}-[0-9]{2}-[0-9]{2}T/,
		h_m_s_subs: $ => /[0-9]{2}:[0-9]{2}:[0-9]{2}.[0-9]{3}Z/,


		// tracing levels
		level: $ => choice(
			$.bad_level,
			$.ok_level
		),
		// error levels
		bad_level: $ => choice(
        'WARN',
			  'ERROR',
		),
		// info levels
		ok_level: $ => choice (
			  'DEBUG',
			  'INFO',
			  'TRACE',
		),
		// name of the module 
		module_name : $ => /[-_a-zA-Z0-9:]*/,
		// match anything that could be in a log line
		_any: $ =>  /./,
		// quote encased string
		string: $ => seq( '"', repeat($._any), '"'),

		// log message
		message: $ => repeat1(
			choice(
				$.constant,
				$.string,
				$._any,
			)
		),
		// Add any additional captures here!
		
		// simple uuid
		_uuid: $ => /[0-9a-f]{8}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{12}/,
		// ipv4 with optional subnet
		_ipv4 : $ => /([0-9]{1,3}\.){3}[0-9]{1,3}(\/([0-9]|[1-2][0-9]|3[0-2]))?/,
		constant : $ => choice(
			$._ipv4,
			$._uuid,
			/\d+/,
			/true|false/,
		),

		// spacing
		_non_newline_whitespace: ($) => /[\t ]+/,
		spacing: $ => repeat1($._non_newline_whitespace),
  }
});

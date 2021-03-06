
kea ::: load_test_dependencies(environment())

unit_test('xImplode')

	over(strs) +

	it('collapsing with character 0 is character 0') +
	holdsWhen(
		is_character(strs) && !any(is.na(strs)),

		xImplode(character(0), strs) %is% character(0)
	) +

	it('xImplode should never crash') +
	worksWhen(
		is_character(str) && is.character(strs) && !any(is.na(strs)),

		xImplode(str, strs)
	) +

	run()

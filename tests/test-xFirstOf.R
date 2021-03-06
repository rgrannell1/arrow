
kea ::: load_test_dependencies(environment())

unit_test('xFirstOf')

	over(coll) +

	it('always returns the correct element') +
	holdsWhen(
		suchThat $ not_empty_collection(coll),

		xFirstOf(coll) %is% coll[[1]]
	) +

	run()

message('xFirstOf')

	over(coll) +

	it('fails when the collection is too short') +
	failsWhen(
		suchThat $ is_empty_collection(coll),

		xFirstOf(coll)
	) +

	run()


kea ::: load_test_dependencies(environment())

unit_test("xPoll")

	over(coll) +

	it('xPoll counts true occurrences.') +
	holdsWhen(
		is.logical(coll) && length(coll) > 0,

		xPoll(identity, coll) %is% length(which(coll)) == 0
	) +

	it('xPoll with the empty collection is integer(0)') +
	holdsWhen(
		suchThat $ is_empty_collection(coll),

		xPoll(function (x) True,  coll) %is% integer(0),
		xPoll(function (x) False, coll) %is% integer(0),
		xPoll(function (x) Na,    coll) %is% integer(0)
	) +

	it('xPoll with xFalsity is 0') +
	holdsWhen(
		suchThat $ not_empty_collection(coll),

		xPoll(function (x) False, coll) == 0,
		xPoll(function (x) Na,    coll) == 0
	) +

	it('xPoll with xTruth is length') +
	holdsWhen(
		suchThat $ not_empty_collection(coll),

		xPoll(function (x) True, coll) == length(coll)
	) +

	run()

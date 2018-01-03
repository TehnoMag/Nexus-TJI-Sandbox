RULE	event CELESTIAL
	condition E.planet=uGet("Mercury")
	:action
		
		SemiMajorAxis := 0.3871;
		Eccentricity := 0.2056;
		Inclination := 	7.0049;
		AscendingNode := 48.3317;
		ArgOfPericenter := 29.1243;
		MeanAnomaly := 	174.795;
		PeriodD := 	87.9522;
		
	:end
END

RULE	event CELESTIAL
	condition E.planet=uGet("Venus")
	:action
		
		SemiMajorAxis := 0.7233;
		Eccentricity := 0.0068;
		Inclination := 	3.3947;
		AscendingNode := 76.681;
		ArgOfPericenter := 54.852;
		MeanAnomaly := 	50.446;
		PeriodD := 	224.702;
		
	:end
END

RULE	event CELESTIAL
	condition E.planet=uGet("Earth")
	:action
		
		SemiMajorAxis := 1;
		Eccentricity := 0.0167;
		Inclination := 	0.0001;
		AscendingNode := 348.739;
		ArgOfPericenter := -245.792;
		MeanAnomaly := 	-2.48301;
		PeriodD := 	365.25;
		
	:end
END

RULE	event CELESTIAL
	condition E.planet=uGet("Mars")
	:action
		
		SemiMajorAxis := 1.5237;
		Eccentricity := 0.0934;
		Inclination := 	1.8506;
		AscendingNode := 49.479;
		ArgOfPericenter := 286.562;
		MeanAnomaly := 	19.412;
		PeriodD := 686.999;
		
	:end
END

RULE	event CELESTIAL
	condition E.planet=uGet("Jupiter")
	:action
		
		SemiMajorAxis := 5.2034;
		Eccentricity := 0.0484;
		Inclination := 	1.3053;
		AscendingNode := 100.556;
		ArgOfPericenter := -85.8021;
		MeanAnomaly := 	19.6501;
		PeriodD := 4332.59;
		
	:end
END

RULE	event CELESTIAL
	condition E.planet=uGet("Saturn")
	:action
		
		SemiMajorAxis := 9.5371;
		Eccentricity := 0.0542;
		Inclination := 	2.4845;
		AscendingNode := 113.715;
		ArgOfPericenter := -21.283;
		MeanAnomaly := 	-42.488;
		PeriodD := 10759.22;
		
	:end
END

RULE	event CELESTIAL
	condition E.planet=uGet("Uranus")
	:action
		
		SemiMajorAxis := 19.1913;
		Eccentricity := 0.0472;
		Inclination := 	0.7699;
		AscendingNode := 74.23;
		ArgOfPericenter := 96.734;
		MeanAnomaly := 	142.268;
		PeriodD := 30688.5;
		
	:end
END

RULE	event CELESTIAL
	condition E.planet=uGet("Neptune")
	:action
		
		SemiMajorAxis := 30.069;
		Eccentricity := 0.0086;
		Inclination := 	1.7692;
		AscendingNode := 131.722;
		ArgOfPericenter := -86.751;
		MeanAnomaly := 	 259.909;
		PeriodD := 60182;
		
	:end
END

RULE	event CELESTIAL
	condition E.planet=uGet("Pluto")
	:action
		
		SemiMajorAxis := 39.4817;
		Eccentricity := 0.248808;
		Inclination := 	17.1418;
		AscendingNode := 110.303;
		ArgOfPericenter := 113.764;
		MeanAnomaly := 	 14.8611;
		PeriodD := 90560;
		
	:end
END
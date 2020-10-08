#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test get_gc_content(AGCTATAG)") 
{
	REQUIRE(get_gc_content(AGCTATAG) == .375);
}

TEST_CASE("Test get_gc_content(CGCTATAG)") 
{
	REQUIRE(get_gc_content(CGCTATAG) == .50);
}

TEST_CASE("Test reverse_string(AGCTATAG)") 
{
	REQUIRE(reverse_string(AGCTATAG) == GATATCGA);
}

TEST_CASE("Test reverse_string(CGCTATAG)") 
{
	REQUIRE(reverse_string(CGCTATAG) == GATATCGC);
}

TEST_CASE("Test get_dna_complement(AAAACCCGGT)") 
{
	REQUIRE(get_dna_complement(AAAACCCGGT) == ACCGGGTTTT);
}

TEST_CASE("Test get_dna_complement(CCCGGAAAAT)") 
{
	REQUIRE(get_dna_complement(CCCGGAAAAT) == ATTTTCCGGG);
}


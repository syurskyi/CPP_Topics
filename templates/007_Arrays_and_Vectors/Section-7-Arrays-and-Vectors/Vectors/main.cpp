//// Section 7
//// Vectors
//
//? ios..
//? ve..   // don't forget this in order to use vectors
//
//u.. s..
//
//in. main
//
////    vector <char> vowels;         // empty
////    vector <char> vowels (5);      // 5 initialized to zero
//    ve.. <ch..> vowels 'a' , 'e', 'i', 'o', 'u'
//
//    c.. __ ? 0 __ e..
//    c.. __ ? 4 __ e..
//
////    vector <int> test_scores (3);  // 3 elements all initialized to zero
////   vector <int> test_scores (3, 100); // 3 elements all initialized to 100
//
//      vector <in.> test_scores 100, 98, 89
//
//    c.. __ "\nTest scores using array syntax:" __ e..
//    c.. __ ? 0 __ e..
//    c.. __ ? 1 __ e..
//    c.. __ ? 2 __ e..
//
//    c.. __ "\nTest scores using vector syntax:" __ e..
//
//    c.. __ ?.at 0 __ e..
//    c.. __ ?.at 1 __ e..
//    c.. __ ?.at 2 __ e..
//    c.. __ "\nThere are " __ ?.s.. __ " scores in the vector" __ e..
//
//    c.. __ "\nEnter 3 test scores: "
//    ci.  __ ?.at 0
//    ci. __ ?.at 1
//    ci. __ ?.at 2
//
//    c.. __ "\nUpdated test scores: " __ e..
//
//    c.. __ ?.at 0 __ e..
//    c.. __ ?.at 1 __ e..
//    c.. __ ?.at 2 __ e..
//
//
//    c.. __ "\nEnter a test score to add to the vector: ";
//
//    in. score_to_add {0};
//    ci. __ ?
//
//    ?.push_back ?
//
//    c.. __ "\nEnter one more test score to add to the vector: ";
//
//    ci. __ ?
//
//    ?.p_b.. ?
//
//     c.. __ "\nTest scores are now: " __ e..
//
//    c.. __ ?.at 0 __ e..
//    c.. __ ?.at 1 __ e..
//    c.. __ ?.at 2 __ e..
//    c.. __ ?.at 3 __ e..
//    c.. __ ?.at 4 __ e..
//
//    c.. __ "\nThere are now " __ ?.s.. __ " scores in the vector" __ e..
//
//  //  cout << "This should cause an exception!!" << test_scores.at(10) << endl;
//
//    // Example of a 2D-vector
//
//    ve.. _vector_in.__ movie_ratings
//
//        {1, 2, 3, 4},
//        {1, 2, 4, 4},
//        {1, 3, 4, 5}
//
//
//    c.. __ "\nHere are the movie rating for reviewer #1 using array syntax :" __ e..
//    c.. __ ? 0 0 __ e..
//    c.. __ ? 0 1 __ e..
//    c.. __ ? 0 2 __ e..
//    c.. __ ? 0 3 __ e..
//
//     c.. __ "\nHere are the movie rating for reviewer #1 using vector syntax :" __ e..
//    c.. __ ?.at 0 .at 0 __ e..
//    c.. __ ?.at 0 .at 1 __ e..
//    c.. __ ?.at 0 .at 2 __ e..
//    c.. __ ?.at 0 .at 3 __ e..
//
//    c.. __ e..
//    r_ 0;
//
//

// doc_book.ysc @ L471
void func_10(var uParam0, var uParam1)
{
  vector3 vVar0[24];
  char[] cVar3[8];

  switch ((*uParam1)[0 /*9*/])
  {
    case joaat("DOCUMENT_LETTER_MAYOR_INVITE"):
      if (func_47(109) && !func_48(109))
      {
        func_49(109, 1);
        func_59(109);
        MemCopy(&cVar0, {Global_1347702[109 /*49*/].f_1}, 3);
        StringConCat(&cVar0, "_obj", 24);
        if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0) && UILOG::_UILOG_IS_ENTRY_REGISTERED(func_55(109), func_56(109)))
        {
          cVar3 = func_57(0, &cVar0, 0, 0, -1, -1);
          func_58(109, &cVar0, cVar3, -1082130432 /* Float: -1f */);
        }
      }
      break;
    case joaat("DOCUMENT_LETTER_MAYOR_INVITE2A"):
    case joaat("DOCUMENT_LETTER_MAYOR_INVITE2B"):
      if (func_47(110) && !func_48(110))
      {
        func_49(110, 1);
        func_60(109, 0);
      }
      break;
  }
}
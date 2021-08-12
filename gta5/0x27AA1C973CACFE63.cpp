// fm_race_creator.ysc @ L245363
void func_2562(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
  if (bParam0 == PLAYER::PLAYER_ID())
  {
    if ((bParam1 != func_39() && func_1056(bParam0, 1)) && !func_2277(bParam0, bParam1))
    {
      STATS::_0x27AA1C973CACFE63(func_2235(func_1061(bParam0)), func_2234(func_1061(bParam0)), Global_1630816[bParam1 /*597*/].f_524, Global_1630816[bParam1 /*597*/].f_525, iParam2, iParam5, iParam6, iParam3, iParam4, func_333(bParam1) == 178);
    }
  }
}
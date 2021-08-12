// standard_global_init.ysc @ L668
void func_16(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7, int iParam8)
{
  if (iParam7 == 7)
  {
    return;
  }
  Global_94509[iParam7 /*9*/].f_8 = MISC::ADD_POLICE_RESTART(Param3, fParam6, 0);
  MISC::DISABLE_POLICE_RESTART(Global_94509[iParam7 /*9*/].f_8, false);
  Global_94509[iParam7 /*9*/] = { Param0 };
  Global_94509[iParam7 /*9*/].f_3 = { Param3 };
  Global_94509[iParam7 /*9*/].f_6 = fParam6;
  Global_94509[iParam7 /*9*/].f_7 = iParam8;
  func_12(iParam8, 0, 0);
  func_11(iParam8, 0);
  func_10(iParam8, 1);
  func_9(iParam8, 0, 0);
  func_8(iParam8, 1);
  func_7(iParam8, Global_94509[iParam7 /*9*/]);
  func_6(iParam8, 3);
  func_5(iParam8, 60);
}
// standard_global_init.ysc @ L357
void func_4(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7, int iParam8)
{
  if (iParam7 == 5)
  {
    return;
  }
  Global_94573[iParam7 /*9*/].f_8 = MISC::ADD_HOSPITAL_RESTART(Param3, fParam6, 0);
  MISC::DISABLE_HOSPITAL_RESTART(Global_94573[iParam7 /*9*/].f_8, false);
  Global_94573[iParam7 /*9*/] = { Param0 };
  Global_94573[iParam7 /*9*/].f_3 = { Param3 };
  Global_94573[iParam7 /*9*/].f_6 = fParam6;
  Global_94573[iParam7 /*9*/].f_7 = iParam8;
  func_12(iParam8, 0, 0);
  func_11(iParam8, 0);
  func_10(iParam8, 1);
  func_9(iParam8, 0, 0);
  func_8(iParam8, 1);
  func_7(iParam8, Global_94573[iParam7 /*9*/]);
  func_6(iParam8, 2);
  func_5(iParam8, 61);
}
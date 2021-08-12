// standard_global_reg.ysc @ L104129
void func_656(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10)
{
  int iVar0;
  
  if (iParam7 == 10)
  {
    return;
  }
  iVar0 = func_72(iParam10);
  Global_94408[iParam7 /*10*/].f_8 = MISC::REGISTER_SAVE_HOUSE(Param3, fParam6, sParam9, 0, iVar0);
  MISC::SET_SAVE_HOUSE(Global_94408[iParam7 /*10*/].f_8, true, true);
  Global_94408[iParam7 /*10*/] = { Param0 };
  Global_94408[iParam7 /*10*/].f_3 = { Param3 };
  Global_94408[iParam7 /*10*/].f_6 = fParam6;
  Global_94408[iParam7 /*10*/].f_7 = iParam8;
  Global_94408[iParam7 /*10*/].f_9 = iParam10;
  if (iParam8 != 263)
  {
    func_111(iParam8, 0, 0);
    func_663(iParam8);
    func_662(iParam8, 0);
    func_660(iParam8, 1, iParam10, 0);
    func_659(iParam8, Global_94408[iParam7 /*10*/]);
    func_658(iParam8, 1);
    func_657(iParam8, 40);
  }
}
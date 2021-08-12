// agency_heist3b.ysc @ L112026
void func_739(var uParam0, struct<3> Param1, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, float fParam10, bool bParam11, bool bParam12)
{
  func_684(uParam0, Param1, fParam4, iParam6, iParam7, iParam8);
  if (bLocal_598)
  {
    TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, Param1, iParam5, bParam9, fParam10, bParam11, bParam12, uParam0->f_1, false);
  }
  else
  {
    TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(*uParam0, Param1, iParam5, bParam9, fParam10, bParam11, bParam12, uParam0->f_1, false);
  }
}
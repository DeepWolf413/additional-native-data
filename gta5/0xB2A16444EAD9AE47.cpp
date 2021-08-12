// exile1.ysc @ L9525
void func_151(int iParam0, struct<3> Param1, float fParam4, bool bParam5)
{
  TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Param1, PLAYER::PLAYER_PED_ID(), fParam4, true, 0.5f, 4f, false, 64, false, -957453492, 20000);
  if (bParam5)
  {
    Local_282[iParam0 /*17*/].f_11 = { Param1 };
  }
}
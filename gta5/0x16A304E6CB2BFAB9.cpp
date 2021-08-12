// fm_mission_controller.ysc @ L375724
int func_5460(char* sParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4)
{
  int iVar0;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  struct<8> Var5;
  char cVar21[64];
  
  if (!MISC::IS_BIT_SET(bLocal_14834, 15))
  {
    if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
    {
      if (!func_5462(sParam0, &(Global_1575043[bParam1 /*16*/]), &(Global_1575043[iParam3 /*16*/])))
      {
        iVar0 = func_243(Local_31280[bLocal_3287 /*292*/].f_1, bParam2, 0);
        HUD::GET_HUD_COLOUR(iVar0, &iVar1, &iVar2, &iVar3, &iVar4);
        HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(iVar1, iVar2, iVar3, iVar4);
        StringCopy(&Var5, PLAYER::GET_PLAYER_NAME(bParam2), 64);
        iVar0 = func_243(Local_31280[bLocal_3287 /*292*/].f_1, bParam4, 0);
        HUD::GET_HUD_COLOUR(iVar0, &iVar1, &iVar2, &iVar3, &iVar4);
        HUD::_SET_SCRIPT_VARIABLE_2_HUD_COLOUR(iVar1, iVar2, iVar3, iVar4);
        StringCopy(&cVar21, PLAYER::GET_PLAYER_NAME(bParam4), 64);
        func_5461(sParam0, &Var5, &cVar21, 0, 1);
      }
      return 1;
    }
  }
  return 0;
}
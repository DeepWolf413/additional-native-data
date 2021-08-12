// fm_mission_controller.ysc @ L603712
void func_10044(int iParam0, bool bParam1)
{
  int iVar0;
  
  if (!bParam1)
  {
    iVar0 = Global_4456448.f_594[Local_31280[bLocal_3287 /*292*/].f_1 /*16832*/].f_2325[Local_28024[Local_31280[bLocal_3287 /*292*/].f_1] /*36*/].f_2;
  }
  else
  {
    iVar0 = Global_4456448.f_594[Local_31280[bLocal_3287 /*292*/].f_1 /*16832*/].f_2938[Local_28024[Local_31280[bLocal_3287 /*292*/].f_1] /*36*/].f_2;
  }
  if (PLAYER::GET_PLAYER_WANTED_LEVEL(bLocal_3284) < iVar0)
  {
    PLAYER::SET_PLAYER_WANTED_LEVEL(bLocal_3284, iVar0, false);
    PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(bLocal_3284, false);
  }
  else
  {
    PLAYER::_0x4669B3ED80F24B4E(bLocal_3284);
    HUD::_0xBA8D65C1C65702E5(true);
    *iParam0 = 1;
  }
}
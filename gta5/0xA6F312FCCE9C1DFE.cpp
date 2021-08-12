// fm_mission_controller.ysc @ L685914
void func_11397()
{
  int iVar0;
  int iVar1;
  
  iVar0 = Local_31280[bLocal_3288 /*292*/].f_1;
  iVar1 = Local_28024[iVar0];
  if (iVar1 < 17)
  {
    if (bLocal_3292)
    {
      if (Global_4456448.f_594[iVar0 /*16832*/].f_5314[iVar1] > -1)
      {
        PLAYER::RESET_PLAYER_STAMINA(bLocal_3284);
        PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_3286, (SYSTEM::TO_FLOAT(Global_4456448.f_594[iVar0 /*16832*/].f_5314[iVar1]) / 10f));
      }
    }
  }
}
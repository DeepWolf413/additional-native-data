// tuner_sandbox_activity.ysc @ L152186
void func_2306(int iParam0)
{
  int iVar0;
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (iLocal_1787.f_21[iParam0] == 0)
  {
    iLocal_1787.f_21[iParam0] = func_2307(iParam0);
    GRAPHICS::_SET_CHECKPOINT_SCALE(iLocal_1787.f_21[iParam0], Local_284.f_98.f_1[iParam0 /*18*/].f_10.f_5);
    GRAPHICS::_SET_CHECKPOINT_ICON_SCALE(iLocal_1787.f_21[iParam0], Local_284.f_98.f_1[iParam0 /*18*/].f_10.f_6);
    GRAPHICS::SET_CHECKPOINT_CYLINDER_HEIGHT(iLocal_1787.f_21[iParam0], Local_284.f_98.f_1[iParam0 /*18*/].f_10.f_3, Local_284.f_98.f_1[iParam0 /*18*/].f_10.f_4, 5f);
    HUD::GET_HUD_COLOUR(Local_284.f_98.f_1[iParam0 /*18*/].f_10.f_2, &iVar0, &iVar1, &iVar2, &iVar3);
    GRAPHICS::SET_CHECKPOINT_RGBA2(iLocal_1787.f_21[iParam0], iVar0, iVar1, iVar2, iVar3);
  }
}
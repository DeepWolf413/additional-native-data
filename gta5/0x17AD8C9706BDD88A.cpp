// fm_race_creator.ysc @ L436061
void func_6741()
{
  int iVar0;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
  HUD::_THEFEED_SET_ANIMPOSTFX_COLOR(iVar0, iVar1, iVar2, iVar3);
  iVar4 = 1;
  HUD::_THEFEED_SET_ANIMPOSTFX_COUNT(iVar4);
  bVar5 = false;
  if (Global_112293.f_14049[Global_19798 /*20*/].f_10 == 1)
  {
    bVar5 = true;
  }
  HUD::_THEFEED_SET_ANIMPOSTFX_SOUND(bVar5);
}
// fm_content_business_battles.ysc @ L159298
void func_2365(int iParam0)
{
  float fVar0;
  float fVar1;
  int iVar2;
  int iVar3;
  
  if (!HUD::IS_PAUSE_MENU_ACTIVE() || HUD::_IS_MINIMAP_IN_INTERIOR())
  {
    if (func_2367(iParam0, &fVar0, &fVar1, &iVar2, &iVar3))
    {
      HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(MISC::GET_HASH_KEY(func_2366(iParam0)), fVar0, fVar1, iVar2, iVar3);
    }
    Stack.Push(iParam0);
    Call_Loc(Local_2036.f_496.f_3);
    if (StackVal)
    {
      HUD::HIDE_MINIMAP_EXTERIOR_MAP_THIS_FRAME();
    }
  }
  else
  {
    Stack.Push(iParam0);
    Call_Loc(Local_2036.f_496.f_3);
    if (StackVal)
    {
      HUD::SET_RADAR_AS_EXTERIOR_THIS_FRAME();
      HUD::HIDE_MINIMAP_INTERIOR_MAP_THIS_FRAME();
    }
  }
}
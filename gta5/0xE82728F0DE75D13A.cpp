// am_mp_yacht.ysc @ L7109
void func_117(int iParam0)
{
  int iVar0;
  int iVar1;
  int iVar2;
  var uVar3;
  
  if (func_118() == 0)
  {
    if (uLocal_2700[iParam0] == 0f)
    {
      MISC::GET_GROUND_Z_FOR_3D_COORD(Global_3934119[iLocal_1650 /*2012*/].f_38[iParam0 /*27*/].f_12 + Vector(0.5f, 0f, 0f), &(uLocal_2700[iParam0]), false, false);
    }
    HUD::GET_HUD_COLOUR(9, &iVar0, &iVar1, &iVar2, &uVar3);
    GRAPHICS::_DRAW_MARKER_2(1, Vector(uLocal_2700[iParam0], Global_3934119[iLocal_1650 /*2012*/].f_38[iParam0 /*27*/].f_12.f_1, Global_3934119[iLocal_1650 /*2012*/].f_38[iParam0 /*27*/].f_12) + Vector(-0.25f, 0f, 0f), 0f, 0f, 0f, 0f, 0f, 0f, 0.75f, 0.75f, 0.75f, iVar0, iVar1, iVar2, 255, false, false, 2, false, 0, 0, false, false, false);
  }
}
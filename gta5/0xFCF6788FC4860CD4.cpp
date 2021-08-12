// freemode.ysc @ L963370
int func_14966(var uParam0, struct<3> Param1)
{
  int iVar0;
  int iVar1;
  int iVar2;
  int iVar3;
  var uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  struct<3> Var9;
  
  HUD::GET_HUD_COLOUR(func_14968(uParam0), &iVar1, &iVar2, &iVar3, &uVar4);
  if (func_14931(uParam0))
  {
    iVar0 = GRAPHICS::CREATE_CHECKPOINT(func_14967(uParam0), Param1 + Vector(4f, 0f, 0f), Param1, 7f, iVar1, iVar2, iVar3, 150, 0);
    GRAPHICS::SET_CHECKPOINT_CYLINDER_HEIGHT(iVar0, 7.5f, 7.5f, 100f);
  }
  else
  {
    HUD::GET_HUD_COLOUR(134, &iVar5, &iVar6, &iVar7, &iVar8);
    Var9 = { func_14933(uParam0, 1) };
    iVar0 = GRAPHICS::CREATE_CHECKPOINT(func_14967(uParam0), Param1 + Vector(2f, 0f, 0f), Var9 + Vector(2f, 0f, 0f), (((7.5f * 1f) * 0.66f) * 0.7f), iVar1, iVar2, iVar3, 150, 0);
    GRAPHICS::SET_CHECKPOINT_RGBA2(iVar0, iVar5, iVar6, iVar7, iVar8);
    GRAPHICS::SET_CHECKPOINT_CYLINDER_HEIGHT(iVar0, 6f, 6f, 100f);
    GRAPHICS::_0xFCF6788FC4860CD4(iVar0);
  }
  return iVar0;
}
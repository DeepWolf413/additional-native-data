// fm_mission_controller.ysc @ L324962
int func_4513(var uParam0, struct<3> Param1)
{
  int iVar0;
  bool bVar1;
  int iVar2;
  
  if (*uParam0 == joaat("weapon_unarmed"))
  {
    return 0;
  }
  iVar0 = WEAPON::CREATE_WEAPON_OBJECT(*uParam0, uParam0->f_1, Param1, false, 1f, 0, 0, 1);
  WEAPON::SET_WEAPON_OBJECT_TINT_INDEX(iVar0, uParam0->f_3);
  WEAPON::_0x977CA98939E82E4B(iVar0, uParam0->f_4);
  iVar2 = func_4511(*uParam0, bVar1);
  while (iVar2 != 0)
  {
    if (MISC::IS_BIT_SET(uParam0->f_2, bVar1))
    {
      WEAPON::GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(iVar0, iVar2);
      func_4508(iVar0, iVar2);
    }
    bVar1++;
    iVar2 = func_4511(*uParam0, bVar1);
  }
  return iVar0;
}
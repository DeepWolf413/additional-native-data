// mudtown1.ysc @ L78900
void func_2191(var uParam0)
{
  if (!func_170(*uParam0, 1))
  {
    return;
  }
  if (!PED::DOES_GROUP_EXIST(iLocal_447))
  {
    func_2495(*uParam0);
    iLocal_447 = PED::CREATE_GROUP(0);
    PED::SET_PED_CONFIG_FLAG(*uParam0, 279, true);
    PED::SET_PED_AS_GROUP_LEADER(*uParam0, iLocal_447, false);
    PED::SET_GROUP_FORMATION(iLocal_447, 9);
    PED::_0x97C475212B327666(iLocal_447, 1);
    PED::_0x154B7E841AC7412F(iLocal_447, 1);
  }
}
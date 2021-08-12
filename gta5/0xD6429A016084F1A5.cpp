// fm_survival_controller.ysc @ L249873
int func_3119(int iParam0)
{
  int iVar0;
  int iVar1;
  
  if (Global_4718592.f_61833[iParam0 /*150*/].f_15 == joaat("pickup_health_standard"))
  {
    return joaat("pickup_health_standard");
  }
  if (Global_4718592.f_61833[iParam0 /*150*/].f_15 == joaat("pickup_armour_standard"))
  {
    return joaat("pickup_armour_standard");
  }
  iVar0 = Global_4456448.f_135326.f_1722[iLocal_269 /*11*/][iLocal_1222];
  iVar1 = Global_4718592.f_61833[iParam0 /*150*/].f_83[iLocal_269];
  if (iVar1 != 76)
  {
    iVar0 = OBJECT::GET_WEAPON_TYPE_FROM_PICKUP_TYPE(iVar1);
  }
  iLocal_1222++;
  if (iLocal_1222 >= 10)
  {
    iLocal_1222 = (iLocal_1222 - 10);
  }
  return OBJECT::_GET_PICKUP_HASH_FROM_WEAPON(iVar0);
  iLocal_1222++;
  return joaat("pickup_weapon_smg");
}
// generic_weapon_item.ysc @ L329
void func_9(int iParam0)
{
  int iVar0;
  int iVar1;

  iVar0 = func_11();
  WEAPON::GET_CURRENT_PED_WEAPON(iVar0, &iVar1, true, 0, false);
  INVENTORY::_0x951847CEF3D829FF(Local_9.f_2, &(Local_9.f_7), iVar0);
  DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Local_9.f_3, func_16(iVar1, iParam0));
  DATABINDING::_DATABINDING_WRITE_DATA_STRING(Local_9.f_4, func_17(&iParam0));
}
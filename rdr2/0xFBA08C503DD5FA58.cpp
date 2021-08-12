// gang3.ysc @ L52142
void func_1281()
{
  if (!func_446(29))
  {
    iLocal_984 = OBJECT::CREATE_PICKUP(joaat("PICKUP_WEAPON_SNIPERRIFLE_ROLLINGBLOCK"), 3152.32f, -489.89f, 48.61f, 16640, -1, true, 0, 0, 0f, 0);
    if (OBJECT::DOES_PICKUP_EXIST(iLocal_984))
    {
      OBJECT::SET_PICKUP_NOT_LOOTABLE(iLocal_984, 1);
      func_902(29, 1);
    }
  }
}
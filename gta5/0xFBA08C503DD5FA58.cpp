// assassin_construction.ysc @ L18817
void func_384()
{
  if (!OBJECT::DOES_PICKUP_EXIST(iLocal_2172))
  {
    iLocal_1777 = 0;
    MISC::SET_BIT(&iLocal_1777, 3);
    MISC::SET_BIT(&iLocal_1777, 4);
    iLocal_2172 = OBJECT::CREATE_PICKUP(joaat("pickup_parachute"), -140.6149f, -945.9811f, 268.1331f, iLocal_1777, 1, true, 0);
    if (!OBJECT::DOES_PICKUP_EXIST(iLocal_2173))
    {
      iLocal_2173 = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_parachute"), -149.709f, -966.41f, 269.23f, 87f, 22f, 90f, 0, -1, 2, true, 0);
    }
  }
}
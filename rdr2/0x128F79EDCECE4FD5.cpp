// gang2.ysc @ L53349
void func_1301()
{
  if (func_909(Global_35, iLocal_378[1], 1, 1) > 3f)
  {
    if (!PED::CAN_PED_RAGDOLL(Global_35))
    {
      PED::SET_PED_CAN_RAGDOLL(Global_35, true);
    }
    else if (func_172(Global_35, 0))
    {
      if (((WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Global_35, joaat("WEAPON_FALL"), 0) || ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(Global_35)) || ENTITY::IS_ENTITY_IN_WATER(Global_35)) || func_909(Global_35, iLocal_378[1], 1, 1) > 50f)
      {
        func_1373(Global_35, 0, 0);
      }
    }
  }
}
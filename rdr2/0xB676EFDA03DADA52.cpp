// abigail2_1.ysc @ L80617
bool func_2379(int iParam0)
{
  if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    return false;
  }
  if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
  {
    return false;
  }
  if (ENTITY::DOES_ENTITY_EXIST(Global_35))
  {
    if (!ENTITY::IS_ENTITY_DEAD(Global_35) && !PED::IS_PED_INJURED(Global_35))
    {
      if (PED::_GET_RIDER_OF_MOUNT(iParam0, false) == Global_35)
      {
        PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MOVE_LR"), false);
        PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MOVE_UD"), false);
        PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
      }
    }
  }
  PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 0f);
  if (func_2378(iParam0, 1041577989))
  {
    return false;
  }
  if (TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iParam0)))
  {
    return true;
  }
  return false;
}
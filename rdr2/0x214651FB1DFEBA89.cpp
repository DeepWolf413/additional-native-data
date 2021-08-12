// train_robbery1.ysc @ L71629
bool func_1701(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7)
{
  if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
  {
    *uParam0 = VEHICLE::_CREATE_DRAFT_VEHICLE(iParam1, vParam2, fParam5, true, true, bParam6, 0, false);
    VEHICLE::SET_VEHICLE_DOORS_LOCKED(*uParam0, 9);
    VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(*uParam0, false);
    VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0, 0f);
    ENTITY::FREEZE_ENTITY_POSITION(*uParam0, bParam7);
    return false;
  }
  return true;
}
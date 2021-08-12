// beat_train_holdup.ysc @ L9085
bool func_239(int iParam0, var uParam1)
{
  if (PED::IS_PED_IN_ANY_TRAIN(iParam0))
  {
    return false;
  }
  if (ENTITY::IS_ENTITY_IN_AIR(iParam0, 1))
  {
    return false;
  }
  if (PED::IS_PED_ON_VEHICLE(iParam0, false))
  {
    return false;
  }
  if (AITRANSPORT::_0x660639BC60157048(iParam0, uParam1))
  {
    return false;
  }
  return true;
}
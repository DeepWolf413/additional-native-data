// beat_dead_john.ysc @ L20401
void func_494(var uParam0, vector3 vParam1, float fParam4)
{
  if (func_43(*uParam0, 0, 1) && func_67(*uParam0, vParam1, 0) < fParam4)
  {
    PED::SET_PED_RESET_FLAG(*uParam0, 94, true);
    PED::_0xC6981AFF6D2A71C2(*uParam0);
  }
}
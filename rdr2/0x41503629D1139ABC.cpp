// av_hobo_train_hop.ysc @ L2674
bool func_58(vector3 vParam0)
{
  vector3 vVar0;
  var uVar3;

  if (!ENTITY::IS_ENTITY_DEAD(iLocal_42))
  {
    uLocal_43 = VEHICLE::_0x45853F4E17D847D5(iLocal_42);
  }
  if (VEHICLE::_0x0516FAE561276EFC(uLocal_43))
  {
    vVar0 = { VEHICLE::_GET_NEAREST_TRAIN_TRACK_POSITION(vParam0) };
    uVar3 = VEHICLE::_0x6C87F49BFA181DB5(vVar0);
    VEHICLE::_0x41503629D1139ABC(iLocal_42, uVar3, vVar0);
    return true;
  }
  return false;
}
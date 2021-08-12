// beat_checkpoint.ysc @ L7772
void func_208()
{
  if ((iLocal_875 == 1 || !func_137(uLocal_810[1], 0, 1)) || PED::IS_PED_IN_VEHICLE(uLocal_810[1], iLocal_807, false))
  {
    return;
  }
  if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_810[1], -1252448838))
  {
    if (func_44(uLocal_810[0], iLocal_807, 0))
    {
      AITRANSPORT::_0x8886D83A430537FD(uLocal_810[0], 0);
    }
    PED::SET_PED_INTO_VEHICLE(uLocal_810[1], iLocal_807, -1);
    ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uLocal_810[1], iLocal_807, true);
    VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_807, 1);
    PHYSICS::_0x31160EC47E7C9549(iLocal_807, 1);
  }
}
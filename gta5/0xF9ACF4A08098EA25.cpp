// pilot_school.ysc @ L90899
void func_374()
{
  int iVar0;
  var uVar1;
  
  if (ENTITY::DOES_ENTITY_EXIST(iLocal_4594))
  {
    if (!func_385(iLocal_4594) && !func_375(iLocal_4594, 0, 0, 0, 0, 0, 1, 0, 1))
    {
      iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_4594, -1, false);
      PED::_0xF9ACF4A08098EA25(iVar0, true);
      PED::DELETE_PED(&iVar0);
    }
    if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iLocal_4594))
    {
      VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(iLocal_4594, &uVar1);
      ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&uVar1);
    }
    ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_4594);
  }
  if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_4596))
  {
    GRAPHICS::REMOVE_PARTICLE_FX(iLocal_4596, false);
  }
}
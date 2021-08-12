// fm_mission_controller.ysc @ L319467
void func_4406(int iParam0, int iParam1)
{
  int iVar0;
  
  if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
  {
    return;
  }
  iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
  if (((!VEHICLE::IS_THIS_MODEL_A_HELI(iVar0) && iVar0 != joaat("hydra")) && iVar0 != joaat("tula")) && iVar0 != joaat("avenger"))
  {
    return;
  }
  if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
  {
    return;
  }
  if (((iVar0 == joaat("hydra") || iVar0 == joaat("tula")) || iVar0 == joaat("avenger")) && VEHICLE::_GET_VEHICLE_FLIGHT_NOZZLE_POSITION(iParam0) != 1f)
  {
    VEHICLE::SET_VEHICLE_FLIGHT_NOZZLE_POSITION_IMMEDIATE(iParam0, 1f);
  }
  VEHICLE::SET_VEHICLE_ENGINE_ON(iParam0, true, true, false);
  if (iParam1 && VEHICLE::_DOES_VEHICLE_HAVE_LANDING_GEAR(iParam0))
  {
    VEHICLE::CONTROL_LANDING_GEAR(iParam0, 3);
  }
  VEHICLE::SET_VEHICLE_FORWARD_SPEED(iParam0, 1f);
  VEHICLE::SET_HELI_BLADES_FULL_SPEED(iParam0);
}
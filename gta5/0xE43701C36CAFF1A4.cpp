// fm_bj_race_controler.ysc @ L287501
void func_3936(var uParam0, var uParam1)
{
  if ((((!func_4161(uParam1->f_5318) && ((func_4144(uParam0) || VEHICLE::IS_VEHICLE_MODEL(uParam1->f_5318, joaat("stromberg"))) || VEHICLE::IS_VEHICLE_MODEL(uParam1->f_5318, joaat("thruster")))) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam1->f_5318)) && VEHICLE::_DOES_VEHICLE_HAVE_LANDING_GEAR(uParam1->f_5318)) && VEHICLE::GET_LANDING_GEAR_STATE(uParam1->f_5318) != 4)
  {
    PAD::_0xF239400E16C23E08(0, 0);
    VEHICLE::CONTROL_LANDING_GEAR(uParam1->f_5318, 3);
    MISC::SET_BIT(&(uParam1->f_5390), 23);
  }
  else if (MISC::IS_BIT_SET(uParam1->f_5390, 23))
  {
    PAD::_0xF239400E16C23E08(0, -1);
    MISC::CLEAR_BIT(&(uParam1->f_5390), 23);
  }
}
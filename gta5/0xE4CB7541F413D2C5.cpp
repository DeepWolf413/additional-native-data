// fm_mission_controller_2020.ysc @ L435118
void func_7216(var uParam0)
{
  if (MISC::IS_BIT_SET(Global_4718592.f_70989[uParam0->f_9 /*392*/].f_104, 24))
  {
    if (VEHICLE::IS_THIS_MODEL_A_HELI(uParam0->f_17))
    {
      if (!MISC::IS_BIT_SET(bLocal_12042, uParam0->f_9))
      {
        fLocal_12043[uParam0->f_9] = VEHICLE::GET_HELI_MAIN_ROTOR_HEALTH(uParam0->f_11);
        fLocal_12076[uParam0->f_9] = VEHICLE::GET_HELI_TAIL_ROTOR_HEALTH(uParam0->f_11);
        VEHICLE::SET_HELI_TAIL_EXPLODE_THROW_DASHBOARD(uParam0->f_11, false);
        MISC::SET_BIT(&bLocal_12042, uParam0->f_9);
      }
      else
      {
        if (VEHICLE::GET_HELI_MAIN_ROTOR_HEALTH(uParam0->f_11) != fLocal_12043[uParam0->f_9])
        {
          VEHICLE::_SET_HELI_MAIN_ROTOR_HEALTH(uParam0->f_11, fLocal_12043[uParam0->f_9]);
        }
        if (VEHICLE::GET_HELI_TAIL_ROTOR_HEALTH(uParam0->f_11) != fLocal_12076[uParam0->f_9])
        {
          VEHICLE::_SET_HELI_TAIL_ROTOR_HEALTH(uParam0->f_11, fLocal_12076[uParam0->f_9]);
        }
      }
    }
    else if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam0->f_17))
    {
      VEHICLE::_SET_PLANE_PROPELLERS_HEALTH(uParam0->f_11, 1000f);
    }
  }
}
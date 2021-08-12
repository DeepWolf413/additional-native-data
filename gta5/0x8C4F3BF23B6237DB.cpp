// fm_bj_race_controler.ysc @ L287308
void func_3927(var uParam0)
{
  if (!MISC::IS_BIT_SET(uParam0->f_51.f_7, 4))
  {
    if (STREAMING::HAS_MODEL_LOADED(joaat("p_parachute_s")))
    {
      if (STREAMING::HAS_MODEL_LOADED(joaat("lts_p_para_bag_lts_s")))
      {
        if (STREAMING::HAS_MODEL_LOADED(joaat("lts_p_para_bag_pilot2_s")) && STREAMING::HAS_MODEL_LOADED(joaat("p_para_bag_xmas_s")))
        {
          if (STREAMING::HAS_MODEL_LOADED(joaat("vw_p_para_bag_vine_s")))
          {
            if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_51.f_13))
            {
              if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(uParam0->f_51.f_13))
              {
                MISC::SET_BIT(&(uParam0->f_51.f_7), 4);
              }
            }
            else if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
            {
              uParam0->f_51.f_13 = PED::CREATE_PARACHUTE_BAG_OBJECT(PLAYER::PLAYER_PED_ID(), true, true);
            }
          }
        }
      }
    }
  }
}
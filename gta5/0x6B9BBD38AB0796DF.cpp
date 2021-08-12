// agency_heist2.ysc @ L110117
bool func_679(var uParam0)
{
  if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
  {
    STREAMING::REQUEST_MODEL(joaat("prop_conslift_lift"));
    STREAMING::REQUEST_MODEL(joaat("prop_sub_release"));
    STREAMING::REQUEST_ANIM_DICT("missagency_heist_2a");
    if ((STREAMING::HAS_MODEL_LOADED(joaat("prop_conslift_lift")) && STREAMING::HAS_MODEL_LOADED(joaat("prop_sub_release"))) && STREAMING::HAS_ANIM_DICT_LOADED("missagency_heist_2a"))
    {
      *uParam0 = OBJECT::CREATE_OBJECT(joaat("prop_conslift_lift"), uParam0->f_4, true, true, false);
      ENTITY::SET_CAN_CLIMB_ON_ENTITY(*uParam0, false);
      if (uParam0->f_30 == 1f)
      {
        ENTITY::SET_ENTITY_COORDS(*uParam0, uParam0->f_7, true, false, false, true);
      }
      else if (uParam0->f_30 == 0f)
      {
        ENTITY::SET_ENTITY_COORDS(*uParam0, uParam0->f_4, true, false, false, true);
      }
      ENTITY::SET_ENTITY_ROTATION(*uParam0, uParam0->f_10, 2, true);
      ENTITY::FREEZE_ENTITY_POSITION(*uParam0, true);
      uParam0->f_1 = OBJECT::CREATE_OBJECT(joaat("prop_sub_release"), uParam0->f_4, true, true, false);
      ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_1, *uParam0, 0, Local_787, 0f, 0f, 0f, false, false, false, false, 2, true);
    }
  }
  return (ENTITY::DOES_ENTITY_EXIST(*uParam0) && ENTITY::DOES_ENTITY_EXIST(uParam0->f_1));
}
// event_area_appleseed_stg2.ysc @ L22621
void func_712()
{
  if (ENTITY::IS_ENTITY_DEAD(Local_614.f_690[12 /*12*/].f_8))
  {
    return;
  }
  if (!OBJECT::_0xB6CBD40F8EA69E8A(Local_614.f_690[13 /*12*/].f_8))
  {
    return;
  }
  if (!func_70(8192))
  {
    if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_614.f_690[13 /*12*/].f_8, 1656474583) && !ENTITY::HAS_ANIM_EVENT_FIRED(Local_614.f_690[13 /*12*/].f_8, -1064143891))
    {
      if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_614.f_690[12 /*12*/].f_8, "pickup_steamd", "props_misc@appleseed_loader", 1))
      {
        ENTITY::PLAY_ENTITY_ANIM(Local_614.f_690[12 /*12*/].f_8, "pickup_steamd", "props_misc@appleseed_loader", 8f, false, false, false, 0f, 1);
      }
      func_71(8192);
      TASK::SET_ANIM_RATE(Local_614.f_690[12 /*12*/].f_8, 1f, 0, false);
    }
  }
  else if (!ENTITY::HAS_ANIM_EVENT_FIRED(Local_614.f_690[13 /*12*/].f_8, 1656474583) || ENTITY::HAS_ANIM_EVENT_FIRED(Local_614.f_690[13 /*12*/].f_8, -1064143891))
  {
    func_339(8192);
    TASK::SET_ANIM_RATE(Local_614.f_690[12 /*12*/].f_8, 0f, 0, false);
  }
}
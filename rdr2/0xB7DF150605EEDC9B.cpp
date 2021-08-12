// train_robbery4.ysc @ L91164
void func_2264()
{
  if (!bLocal_9108)
  {
    if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_9258))
    {
      if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_9258, false))
      {
        if (iLocal_9135 < 10)
        {
          if (ENTITY::DOES_ENTITY_EXIST(Local_664[22 /*65*/]))
          {
            if (!PED::IS_PED_INJURED(Local_664[22 /*65*/]))
            {
              if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_664[22 /*65*/], 1957514982))
              {
                FIRE::_0xB7DF150605EEDC9B(Local_7547[6 /*14*/], 0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_7547[6 /*14*/], 0f, -3f, 3.5f), 24, 1f, 1, 0, 1065353216 /* Float: 1f */);
                bLocal_9108 = true;
              }
            }
          }
        }
      }
    }
  }
}
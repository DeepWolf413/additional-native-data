// docks_setup.ysc @ L113548
void func_665(var uParam0)
{
  if (!iLocal_5221)
  {
    if (STREAMING::HAS_ANIM_DICT_LOADED("map_objects"))
    {
      if (ENTITY::IS_ENTITY_ATTACHED(*uParam0))
      {
        ENTITY::PLAY_ENTITY_ANIM(Local_7250.f_2, "Dock_crane_SLD_unload", "map_objects", 8f, false, true, false, 0f, 0);
        ENTITY::DETACH_ENTITY(*uParam0, true, false);
        OBJECT::SET_OBJECT_PHYSICS_PARAMS(*uParam0, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f);
        AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Detach_Container", *uParam0, "CRANE_SOUNDS", false, 0);
        iLocal_7343 = MISC::GET_GAME_TIMER();
        Local_7250.f_77 = 0;
      }
      else if (!Local_7250.f_77)
      {
        if (func_660(ENTITY::GET_ENTITY_COORDS(*uParam0, true), ENTITY::GET_ENTITY_COORDS(Local_7250.f_2, true)))
        {
          ENTITY::PLAY_ENTITY_ANIM(Local_7250.f_2, "Dock_crane_SLD_load", "map_objects", 8f, false, true, false, 0f, 0);
          ENTITY::FREEZE_ENTITY_POSITION(*uParam0, false);
          ENTITY::ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(*uParam0, Local_7250.f_2, -1, -1, Local_5333, Local_5336, Local_5339, -1f, bLocal_5215, bLocal_5216, bLocal_5217, bLocal_5218, 2);
          AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Attach_Container", *uParam0, "CRANE_SOUNDS", false, 0);
          iLocal_7343 = MISC::GET_GAME_TIMER();
          Local_7250.f_77 = 1;
        }
      }
    }
  }
}
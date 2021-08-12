// agency_heist3a.ysc @ L129206
void func_956()
{
  switch (iLocal_4843)
  {
    case 0:
      if (func_598(PLAYER::PLAYER_PED_ID(), 126.562f, -737.4702f, 235.1521f, "V_FIB04_st1", "v_fib04"))
      {
        AUDIO::TRIGGER_MUSIC_EVENT("AH3A_STAIRWELL");
        iLocal_4843++;
      }
      break;
    
    case 1:
      if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 127.788f, -730.537f, 257.157f, 129.667f, -731.221f, 260.157f, 1.1f, false, true, 0))
      {
        AUDIO::TRIGGER_MUSIC_EVENT("AH3A_GET_DOCS");
        iLocal_4843++;
      }
      break;
    
    case 2:
      if (MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(152.194f, -762.495f, 257.157f, 150.503f, -761.88f, 260.157f, 1.8f, joaat("weapon_stickybomb"), false))
      {
        AUDIO::TRIGGER_MUSIC_EVENT("AH3A_C4_PLANTED");
        iLocal_4843++;
      }
      break;
    
    case 3:
      break;
  }
}
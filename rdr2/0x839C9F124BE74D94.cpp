// homeinvasion.ysc @ L61340
void func_1710()
{
  uLocal_5638 = AUDIO::_0x0556C784FA056628("AS_ROWDY_BREAKOUT", "66003688_rowdy");
  AUDIO::_0x839C9F124BE74D94(uLocal_5638, 0, ENTITY::GET_ENTITY_COORDS(Local_268.f_208[0 /*149*/], true, false));
  if (AUDIO::IS_STREAM_PLAYING(uLocal_5637))
  {
    AUDIO::STOP_STREAM(uLocal_5637);
  }
  if ((func_76(4, 512) || (func_71() && func_79(4, 4096))) || (!func_71() && func_79(4, 2048)))
  {
    AUDIO::PLAY_STREAM_FROM_POSITION(ENTITY::GET_ENTITY_COORDS(Local_268.f_208[0 /*149*/], true, false), uLocal_5638);
  }
  else if (func_316(Global_35))
  {
    AUDIO::PLAY_STREAM_FROM_POSITION(ENTITY::GET_ENTITY_COORDS(Local_268.f_208[0 /*149*/], true, false), uLocal_5638);
  }
  else
  {
    AUDIO::PLAY_STREAM_FROM_POSITION(ENTITY::GET_ENTITY_COORDS(Local_268.f_208[0 /*149*/], true, false), uLocal_5638);
  }
}
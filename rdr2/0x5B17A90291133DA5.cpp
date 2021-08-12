// beat_savage_fight.ysc @ L4361
void func_145()
{
  if (!bLocal_1380)
  {
    AUDIO::CANCEL_MUSIC_EVENT("RESAF_START");
    AUDIO::TRIGGER_MUSIC_EVENT("RESAF_FIGHT");
    bLocal_1380 = true;
  }
}
// beat_domestic_dispute.ysc @ L4277
void func_150()
{
  if (VOLUME::_DOES_VOLUME_EXIST(iLocal_545))
  {
    VOLUME::_SET_VOLUME_COORDS(iLocal_545, ENTITY::GET_ENTITY_COORDS(uLocal_309[1], true, false));
    VOLUME::_SET_VOLUME_SCALE(iLocal_545, 1f, 1f, 2f);
  }
  func_315(&(Local_17.f_5), 1);
}
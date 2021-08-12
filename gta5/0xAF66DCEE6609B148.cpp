// agency_heist3a.ysc @ L122602
int func_873()
{
  RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
  Local_5020 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
  if (func_899())
  {
    iLocal_57 = 21;
    return 1;
  }
  func_898();
  func_897();
  func_894();
  func_546();
  func_885();
  func_848();
  func_876();
  func_874();
  func_550();
  return 0;
}
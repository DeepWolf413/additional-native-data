// agency_heist3a.ysc @ L120405
void func_821()
{
  func_825(1280.072f, -1731.712f, 51.5989f, 100f, 120f, "AH_3A_EXT");
  if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
  {
    func_823(0, "michael", 2);
    func_823(1, "franklin", 2);
  }
  if (ENTITY::DOES_ENTITY_EXIST(Local_1019[0 /*32*/]))
  {
    func_822("gunman_selection_1", func_161(3, iLocal_4881), 0, 1);
  }
  if (ENTITY::DOES_ENTITY_EXIST(Local_1019[1 /*32*/]))
  {
    func_822("gunman_selection_2", func_161(3, iLocal_4882), 0, 1);
  }
}
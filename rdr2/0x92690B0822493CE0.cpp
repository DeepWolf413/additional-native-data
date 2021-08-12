// beat_coach_robbery.ysc @ L1604
void func_36()
{
  if (Local_59.f_161)
  {
    if (!bLocal_684)
    {
      PERSCHAR::_0x92690B0822493CE0();
      PERSCHAR::_0xEFC5C6670E0B99BA();
      func_92(Local_59.f_51, 100f, 0, 0);
      func_92(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 100f, 0, 0);
      MISC::CLEAR_AREA(Local_59.f_51, 300f, 2442122);
      bLocal_684 = true;
    }
  }
  else
  {
    func_92(vLocal_15, 20f, 0, 0);
    func_52(Local_59.f_51, 20f, 0, 0, 5);
  }
  func_93(&iLocal_774, 1569.125f, -1433.113f, 61.73186f, 0f, 0f, 0f, 1f, 1f, 3f, "volVicBlockingArea");
  PED::_0x7C00CFC48A782DC0(iLocal_774, uLocal_598[2], 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
  PATHFIND::_0x19C7567D2F2287D6(iLocal_774, 7);
}
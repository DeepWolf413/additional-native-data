// mission_triggerer_b.ysc @ L104873
void func_672()
{
  func_38(&(Global_95867.f_9[0]));
  func_678(&uLocal_529, 3);
  func_38(&(Global_95867.f_9[1]));
  func_678(&uLocal_529, 4);
  TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("d1leadin", false, 1f, 0.5f);
  PED::REMOVE_RELATIONSHIP_GROUP(Global_95867.f_42);
  func_673(145, 0, 0, 0, 0);
  func_673(146, 0, 0, 0, 0);
  if (iLocal_703)
  {
    func_668(7);
    iLocal_703 = 0;
  }
  func_206();
}
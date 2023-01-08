modded class SCR_RespawnMenuHandlerComponent : SCR_RespawnHandlerComponent // declares which class is being modded
{
	int m_bLocalRespawnCount;
	
	//------------------------------------------------------------------------------------------------
	override void OnPlayerSpawned(int playerId, IEntity controlledEntity)
	{
		m_bLocalRespawnCount = m_bLocalRespawnCount + 1;
		Print("on player spawned : " + m_bLocalRespawnCount);
		
		int index = m_aProcessingQueue.Find(playerId);
		if (m_aProcessingQueue.Contains(playerId))
			m_aProcessingQueue.Remove(index);
	}
}
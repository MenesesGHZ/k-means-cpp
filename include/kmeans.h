void populateClusters() {
	for (int p = 0; p < points.size(); ++p) {
		float smallestDistance = clusters[0].centroid.getDistance(points[p]);
		int clusterToJoin = 0;
		for (int i = 1; i < clusters.size(); i++) {
			float distance = clusters[i].centroid.getDistance(points[p]);
			if (distance < smallestDistance) {
				smallestDistance = distance;
				clusterToJoin = i;
			}
		}
		clusters[clusterToJoin].index_points.push_back(p);
	}
}
